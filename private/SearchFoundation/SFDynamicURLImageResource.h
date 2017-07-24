//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFDynamicURLImageResource-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFDynamicURLImageResource : NSObject <SFDynamicURLImageResource, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int pixelWidth:1;
        unsigned int pixelHeight:1;
        unsigned int supportsResizing:1;
    } _has;
    _Bool _supportsResizing;
    double _pixelWidth;
    double _pixelHeight;
    NSString *_formatURL;
    NSArray *_imageOptions;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *imageOptions; // @synthesize imageOptions=_imageOptions;
@property(nonatomic) _Bool supportsResizing; // @synthesize supportsResizing=_supportsResizing;
@property(copy, nonatomic) NSString *formatURL; // @synthesize formatURL=_formatURL;
@property(nonatomic) double pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(nonatomic) double pixelWidth; // @synthesize pixelWidth=_pixelWidth;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasSupportsResizing;
- (_Bool)hasPixelHeight;
- (_Bool)hasPixelWidth;
- (id)initWithProtobuf:(id)arg1;
- (id)_sf_replacementStringForPropertyEntryKey:(id)arg1 value:(id)arg2;
- (id)_sf_urlForSettings:(id)arg1 shouldResize:(_Bool)arg2 width:(double)arg3 height:(double)arg4;
- (id)sf_urlForSettings:(id)arg1 size:(struct CGSize)arg2;
- (id)sf_urlForSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

