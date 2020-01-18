/*
 * main.h
 *
 * OPAL application source file for playing video from a YUV file
 *
 * Copyright (c) 2007 Equivalence Pty. Ltd.
 *
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.0 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is Portable Windows Library.
 *
 * The Initial Developer of the Original Code is Equivalence Pty. Ltd.
 *
 * Contributor(s): ______________________________________.
 *
 * $Revision: 22678 $
 * $Author: rjongbloed $
 * $Date: 2009-05-20 19:35:59 -0500 (Wed, 20 May 2009) $
 */

#ifndef _PlayYUV_MAIN_H
#define _PlayYUV_MAIN_H


class PlayYUV : public PProcess
{
  PCLASSINFO(PlayYUV, PProcess)

  public:
    PlayYUV();
    ~PlayYUV();

    virtual void Main();
    void Play(const PFilePath & filename);

    bool m_singleStep;
    bool m_info;

    PVideoOutputDevice * m_display;
};


#endif  // _PlayYUV_MAIN_H


// End of File ///////////////////////////////////////////////////////////////
