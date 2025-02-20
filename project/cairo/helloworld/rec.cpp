#include <cairo/cairo.h>

int main() {
  // create surface
  cairo_surface_t *surface =
      cairo_image_surface_create(CAIRO_FORMAT_ARGB32, 200, 200);
  // Cairo Create Object
  cairo_t *cr = cairo_create(surface);

  // Set background color (white)
  // apply background color to the cairo object
  cairo_set_source_rgb(cr, 1, 1, 1);
  // paint it with the cairo_paint guy
  cairo_paint(cr);

  // Draw a red rectangle
  // Next color for next object to draw
  cairo_set_source_rgb(cr, 1, 0, 0); // RGB color (red)
  // draw shape
  cairo_rectangle(cr, 50, 50, 100, 100); // x, y, width, height
  // fill shape
  cairo_fill(cr);

  // Save to file
  // everything applied to the surface, save to an image
  cairo_surface_write_to_png(surface, "hello_cairo.png");

  // Clean up
  cairo_destroy(cr);
  cairo_surface_destroy(surface);

  return 0;
}
