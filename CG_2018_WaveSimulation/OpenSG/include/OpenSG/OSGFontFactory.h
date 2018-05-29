#ifndef FONTFACTORY_H_
#define FONTFACTORY_H_

#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGPathHandler.h>

#include <list>

OSG_BEGIN_NAMESPACE 

class Font;

class OSG_SYSTEMLIB_DLLMAPPING FontFactory
{
  private:

    FontFactory(const FontFactory &obj);
    void operator =(const FontFactory &obj);

  protected:

    static FontFactory       _the;

           std::list<Font *> _knownFonts;
  public:
    
    static FontFactory &the(void);

    FontFactory(void);

    virtual ~FontFactory(void);

    virtual Font *queryFont  (PathHandler &paths, const Char8 *fontName);

            Int32 getNumFonts(void                                     );
};

OSG_END_NAMESPACE

#include <OpenSG/OSGFontFactory.inl>

#endif // FONTFACTORY_H_
