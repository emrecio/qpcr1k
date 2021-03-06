#ifndef PDISP_H_
#define PDISP_H_
/*
 *   QPcr1k 
 *   Copyright (C) 1999, 2000 by PolyWog and Javaman for Ghetto.Org
 *    <polywog@ghetto.org>, <javaman@ghetto.org>
 *
 *   A GUI front end using the QT Toolkit and PCP/PCOMM library
 *   for the Icom Pcr-1000 radio.
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include <qapp.h>
#include <qwidget.h>
#ifdef DEBUG_VER_
#include <stdio.h>
#endif // DEBUG_VER_ //

class QGridLayout;
class QLabel;
class QLCDNumber;

class PDisplay : public QWidget
{
    Q_OBJECT

    public:
        PDisplay(QWidget *parent=0, const char *name=0);
        ~PDisplay();

    public slots:
        // available slots to call
        void valueChangeSlot(const char*, const char*);
        void freqChangeSlot(const char*);

/*
    signals:
        // corresponding signals
*/

    private:
        QGridLayout	*PDMainGrid;
        QGridLayout	*PDDetailGrid;

        QLCDNumber	*PDFreqLcd;
        QLCDNumber  *PDPlLcd;
        QLCDNumber  *PDSigLcd;
        QLCDNumber  *PDChLcd;

        QLabel      *PDPlLabel;
        QLabel      *PDSigLabel;
        QLabel      *PDChLabel;

};

#endif /* PDISP_H_ */
