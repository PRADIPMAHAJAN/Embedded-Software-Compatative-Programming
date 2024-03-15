#include "Firmware.h"

gsmResp_t SendSync(const char *sendString)
{
  if(SEND_SYNC == "SYNC\r\n")
  {
    printf("The command string : %s\n", sendString);
    return RESP_OK;
  }
  else
  {
    printf("ERROR\n");
    return RESP_ERROR;
  }
}

gsmResp_t StoreCERT(const char *certificate, struct metaData_t *metaData_t)
{
  strncpy(metaData_t->cert, certificate, sizeof(metaData_t->cert) - 1);
  return RESP_OK;
}

int main()
{
  struct metaData_t metadata;

  Sleep(1000);
  uint8_t status = SendSync(SEND_SYNC);
  if(status != RESP_OK)
  {
    printf("ERROR CAME\n");
    return 0;
  }
  printf("SYNC Success\n");

  status = StoreCERT(caCert, &metadata);
  printf("Certificates : %s\n", metadata.cert);
  Sleep(1000);
  return 0;
}
