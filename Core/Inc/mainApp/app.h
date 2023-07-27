#ifndef __APP_H
#define __APP_H

typedef enum {
    STATUS_OK,
    STATUS_ERROR
} ret_status;

ret_status loop(void);

#endif // _APP_H_