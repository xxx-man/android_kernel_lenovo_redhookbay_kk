/*
 * Support for Intel Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 - 2014 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef __IA_CSS_UTIL_H__
#define __IA_CSS_UTIL_H__

#include "ia_css_pipe.h"

/** @brief check vf frame info.
 *
 * @param[in] info
 * @return	IA_CSS_SUCCESS or error code upon error.
 *
 */
extern enum ia_css_err ia_css_util_check_vf_info(
	const struct ia_css_frame_info * const info);

/** @brief check input configuration.
 *
 * @param[in] stream_config
 * @param[in] must_be_raw
 * @return	IA_CSS_SUCCESS or error code upon error.
 *
 */
extern enum ia_css_err ia_css_util_check_input(
	const struct ia_css_stream_config * const stream_config,
	bool must_be_raw);

/** @brief check vf and out frame info.
 *
 * @param[in] out_info
 * @param[in] vf_info
 * @return	IA_CSS_SUCCESS or error code upon error.
 *
 */
extern enum ia_css_err ia_css_util_check_vf_out_info(
	const struct ia_css_frame_info * const out_info,
	const struct ia_css_frame_info * const vf_info);

/** @brief check width and height
 *
 * @param[in] width
 * @param[in] height
 * @return	IA_CSS_SUCCESS or error code upon error.
 *
 */
extern enum ia_css_err ia_css_util_check_res(
	unsigned int width,
	unsigned int height);

/** @brief check width and height
 *
 * @param[in] stream_format
 * @param[in] two_ppc
 * @return bits per pixel based on given parameters.
 *
 */
extern unsigned int ia_css_util_input_format_bpp(
	enum ia_css_stream_format stream_format,
	bool two_ppc);

/** @brief check if input format it raw
 *
 * @param[in] stream_format
 * @return true if the input format is raw or false otherwise
 *
 */
extern bool ia_css_util_is_input_format_raw(
	enum ia_css_stream_format stream_format);

/** @brief check if input format it yuv
 *
 * @param[in] stream_format
 * @return true if the input format is yuv or false otherwise
 *
 */
extern bool ia_css_util_is_input_format_yuv(
	enum ia_css_stream_format stream_format);

#endif /* __IA_CSS_UTIL_H__ */

