/*
 * IntersectCDC.h
 *
 *  Created on: 25.05.2017
 *      Author: manni1user
 */

#ifndef INTERSECT_INTERSECTCDC_H_
#define INTERSECT_INTERSECTCDC_H_


void ThreadCDC(void const * argument);
void CBConnect(void);
void CBDisconnect(void);
void CBBaud(void);
void CBIncomming(void);

#endif /* INTERSECT_INTERSECTCDC_H_ */
