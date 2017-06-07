//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, OCFontPanose1, OCFontSig;

__attribute__((visibility("hidden")))
@interface OCFontMetadata : NSObject
{
    int _charSet;
    int _pitch;
    int _genericFamily;
    OCFontSig *_sig;
    OCFontPanose1 *_panose1;
    NSArray *_altNames;
}

+ (id)fontMetadataWithSig:(id)arg1 charSet:(int)arg2 panose1:(id)arg3 pitch:(int)arg4 genericFamily:(int)arg5 altNames:(id)arg6;
@property(readonly, nonatomic) NSArray *altNames; // @synthesize altNames=_altNames;
@property(readonly, nonatomic) int genericFamily; // @synthesize genericFamily=_genericFamily;
@property(readonly, nonatomic) int pitch; // @synthesize pitch=_pitch;
@property(readonly, nonatomic) OCFontPanose1 *panose1; // @synthesize panose1=_panose1;
@property(readonly, nonatomic) int charSet; // @synthesize charSet=_charSet;
@property(readonly, nonatomic) OCFontSig *sig; // @synthesize sig=_sig;
- (void)dealloc;
- (id)initWithSig:(id)arg1 charSet:(int)arg2 panose1:(id)arg3 pitch:(int)arg4 genericFamily:(int)arg5 altNames:(id)arg6;

@end

