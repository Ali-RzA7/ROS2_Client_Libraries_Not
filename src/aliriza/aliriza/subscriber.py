import rclpy
from rclpy.node import Node

from tut_interface.msg import Num # Oluşturulan msg dosyası

class MekatekSubscriber(Node):

    def __init__(self):
        super().__init__('mekatek_subscriber') # Düğüm oluşturulur
        self.subscription_ = self.create_subscription(Num, 'mekatek_topic', self.callback, 10) # Subscriber oluşturur. Num tipinde(int), mekatek_topic'i üzerinden, gelen veri(mesaj) metoda iletilir, kuyruk boyutu.

    def callback(self, msg):
        self.get_logger().info('Alındı: "%d"' % msg.num) # Yayının gerçekleştiğini belirten log

def main(args=None):
    rclpy.init(args=args)
    subscriber = MekatekSubscriber()
    try:
        rclpy.spin(subscriber)
    except KeyboardInterrupt:
        pass

    subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

