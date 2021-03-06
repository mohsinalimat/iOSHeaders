//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@interface CUINamedColor : CUINamedLookup
{
    struct CGColor *_cgColor;
    long long _displayGamut;
}

@property(readonly, nonatomic) long long displayGamut; // @synthesize displayGamut=_displayGamut;
- (void)dealloc;
@property(readonly, nonatomic) struct CGColor *cgColor; // @synthesize cgColor=_cgColor;
- (struct CGColor *)cgColorCreateCopyWithColorSpaceID:(long long)arg1;
- (struct CGColorSpace *)_colorSpaceWithID:(long long)arg1;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

