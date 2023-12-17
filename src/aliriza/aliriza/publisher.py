import rclpy
from rclpy.node import Node

from tut_interface.msg import Num # Oluşturulan msg dosyası
class MekatekPublisher(Node):

    def __init__(self):
        super().__init__('mekatek_publisher') # Düğüm oluşturulur
        self.publisher_ = self.create_publisher(Num, 'mekatek_topic', 10)# Publisher oluşturulur.Mesaj türü, mekatek_topic topic ismi, kuyruk boyutu. self.publisher_ MekatekPublisher sınıfının bir üyesi olan bir yayıncı nesnesidir.
        
        self.timer_ = self.create_timer(1, self.publish_message) # Her saniyede publish_message metodunu çağırır. 
        self.i = 0

    def publish_message(self):
        msg = Num()
        msg.num = self.i

        self.publisher_.publish(msg) # Topic üzerine mesajı yayınlar
        self.get_logger().info('Publishing: "%d"' % msg.num) # Yayının gerçekleştiğini belirten log mesajı
        self.i += 1  

def main(args=None):
    rclpy.init(args=args)
    publisher = MekatekPublisher()
    try:
        rclpy.spin(publisher)
    except KeyboardInterrupt:
        pass

    publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

