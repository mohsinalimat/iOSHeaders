//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSWPFontCacheValue : NSObject
{
    struct __CTFont *_ctFont;
}

+ (id)cacheValueWithCTFont:(struct __CTFont *)arg1;
@property(readonly, nonatomic) struct __CTFont *ctFont; // @synthesize ctFont=_ctFont;
- (void)dealloc;
- (id)initWithCTFont:(struct __CTFont *)arg1;

@end

