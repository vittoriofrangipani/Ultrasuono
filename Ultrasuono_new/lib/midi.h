

uint8_t * controlChange(int channel, int control, int value) {
  uint8_t buf[] = {(uint8_t)channel, (uint8_t)control, (uint8_t)value}; 
  return buf;
}