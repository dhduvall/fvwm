/* -*-c-*- */
/* This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef Picture_Utils_H
#define Picture_Utils_H

int PictureAllocColor(Display *dpy, Colormap cmap, XColor *c, int no_limit);
void PictureFreeColors(
	Display *dpy, Colormap cmap, Pixel *pixels, int n, unsigned long planes);
Pixel PictureGetNextColor(Pixel p, int n);
void PictureAllocColorTable(int color_limit, char *module);
void PictureReduceColor(char **my_color, int color_limit);
void PictureReduceRGBColor(XColor *c, int color_limit);
Pixel PictureRGBtoPixel(int r, int g, int b);

#endif
