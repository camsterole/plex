/*
 *      Copyright (C) 2005-2008 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */
// VideoSettings.h: interface for the CVideoSettings class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_VIDEOSETTINGS_H__562A722A_CD2A_4B4A_8A67_32DE8088A7D3__INCLUDED_)
#define AFX_VIDEOSETTINGS_H__562A722A_CD2A_4B4A_8A67_32DE8088A7D3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

enum EINTERLACEMETHOD
{
  VS_INTERLACEMETHOD_NONE=0,
  VS_INTERLACEMETHOD_AUTO=1,
  VS_INTERLACEMETHOD_DEINTERLACE=2,

  VS_INTERLACEMETHOD_RENDER_BOB=3,
  VS_INTERLACEMETHOD_RENDER_BOB_INVERTED=4,
  
  VS_INTERLACEMETHOD_RENDER_WEAVE=5,
  VS_INTERLACEMETHOD_RENDER_WEAVE_INVERTED=6,

  VS_INTERLACEMETHOD_RENDER_BLEND=7
};

enum ESCALINGMETHOD
{
  VS_SCALINGMETHOD_NEAREST=0,
  VS_SCALINGMETHOD_LINEAR,
  
#ifndef __APPLE__
  VS_SCALINGMETHOD_CUBIC,
  VS_SCALINGMETHOD_LANCZOS2,
  VS_SCALINGMETHOD_LANCZOS3,
  VS_SCALINGMETHOD_SINC8,
  VS_SCALINGMETHOD_NEDI,
#endif
  
  VS_SCALINGMETHOD_BICUBIC_SOFTWARE,
  VS_SCALINGMETHOD_LANCZOS_SOFTWARE,
  VS_SCALINGMETHOD_SINC_SOFTWARE,
};

class CVideoSettings
{
public:
  CVideoSettings();
  ~CVideoSettings() {};

  bool operator!=(const CVideoSettings &right) const;

  bool m_NoCache;
  bool m_NonInterleaved;
  bool m_bForceIndex;
  EINTERLACEMETHOD m_InterlaceMethod;
  ESCALINGMETHOD   m_ScalingMethod;
  int m_FilmGrain;
  int m_ViewMode;   // current view mode
  float m_CustomZoomAmount; // custom setting zoom amount
  float m_CustomPixelRatio; // custom setting pixel ratio
  int m_AudioStream;
  float m_VolumeAmplification;
  bool m_OutputToAllSpeakers;
  int m_SubtitleStream;
  float m_SubtitleDelay;
  bool m_SubtitleOn;
  bool m_SubtitleCached;
  int m_Brightness;
  int m_Contrast;
  int m_Gamma;
  float m_AudioDelay;
  int m_ResumeTime;
  bool m_Crop;
  int m_CropTop;
  int m_CropBottom;
  int m_CropLeft;
  int m_CropRight;

private:
};

#endif // !defined(AFX_VIDEOSETTINGS_H__562A722A_CD2A_4B4A_8A67_32DE8088A7D3__INCLUDED_)
