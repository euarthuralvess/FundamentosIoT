import​ time
from​ serial ​ import​ Serial
canalSerial=Serial(​ '/dev/ttyACM0'​ , ​ 9600​ )
while​ ​ True​ :
print​ ​ 'Monitoramento: '​ ,canalSerial.readline()
canalSerial.close()
