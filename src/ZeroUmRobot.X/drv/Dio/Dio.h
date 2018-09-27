


#ifndef DIO_H
#define DIO_H
#include <stdint.h>
#include <dio_cfg.h>

void Dio_writeChannel(Dio_ChannelType channelId, Dio_LevelType level);
Dio_LevelType  Dio_readChannel(Dio_ChannelType channelId, Dio_LevelType level);
void Dio_flipChannel(Dio_ChannelType channelId);
void Dio_writePort(Dio_PortType portId, Dio_LevelType level);
void Dio_readPort(Dio_PortType portId, Dio_LevelType level);
void Dio_writeGroup(Dio_GroupType groupId, Dio_LevelType level);
void Dio_readGroup(Dio_GroupType groupId, Dio_LevelType level);

/*Dio_PortsType
 * The order of the ports must match in
 * Dio_PortsType and Dio_Ports
 */ 


#endif  /* DIO_H */