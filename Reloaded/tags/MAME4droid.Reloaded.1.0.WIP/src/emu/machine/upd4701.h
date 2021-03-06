/***************************************************************************

    NEC uPD4701

    Incremental Encoder Control

***************************************************************************/

#ifndef __UPD4701_H__
#define __UPD4701_H__

/***************************************************************************
    MACROS / CONSTANTS
***************************************************************************/

#define UPD4701		DEVICE_GET_INFO_NAME(upd4701)

#define MDRV_UPD4701_ADD(_tag) \
	MDRV_DEVICE_ADD(_tag, UPD4701, 0)


/***************************************************************************
    PROTOTYPES
***************************************************************************/

/* device interface */
DEVICE_GET_INFO( upd4701 );

extern WRITE8_DEVICE_HANDLER( upd4701_cs_w );
extern WRITE8_DEVICE_HANDLER( upd4701_xy_w );
extern WRITE8_DEVICE_HANDLER( upd4701_ul_w );
extern WRITE8_DEVICE_HANDLER( upd4701_resetx_w );
extern WRITE8_DEVICE_HANDLER( upd4701_resety_w );
extern WRITE16_DEVICE_HANDLER( upd4701_x_add );
extern WRITE16_DEVICE_HANDLER( upd4701_y_add );
extern WRITE8_DEVICE_HANDLER( upd4701_switches_set );

extern READ16_DEVICE_HANDLER( upd4701_d_r );
extern READ8_DEVICE_HANDLER( upd4701_cf_r );
extern READ8_DEVICE_HANDLER( upd4701_sf_r );


#endif	/* __UPD4701_H__ */
