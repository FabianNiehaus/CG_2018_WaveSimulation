#ifndef TTIMAGEGLYPH_H_
#define TTIMAGEGLYPH_H_

#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGBaseTypes.h>

#ifdef OSG_WITH_FREETYPE1

#include "OpenSG/OSGImageFontGlyph.h"
#include "OpenSG/OSGTTFontGlyph.h"

OSG_BEGIN_NAMESPACE 

class OSG_SYSTEMLIB_DLLMAPPING TTImageFontGlyph :
    public         ImageFontGlyph,
    public virtual TTFontGlyph
{

  private:

    TTImageFontGlyph(const TTImageFontGlyph &obj);
    void operator =(const TTImageFontGlyph &obj);

  protected:
  public:

    TTImageFontGlyph(void);
    TTImageFontGlyph(IGlyphType type, Int32 ascii, Int32 unicode);

    virtual ~TTImageFontGlyph(void);

            void setup (IGlyphType type, Int32 ascii, Int32 unicode);
    virtual bool create(void                                       );
};

OSG_END_NAMESPACE

#endif // OSG_WITH_FREETYPE1
#endif // TTIMAGEGLYPH_H_
