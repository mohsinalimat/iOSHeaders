//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSSPresetSource-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCHStyleBootstrapping : NSObject <TSSPresetSource>
{
}

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (void)bootstrapStylesInStylesheet:(id)arg1 numberOfPresets:(unsigned long long)arg2;
+ (id)stylePresetForStylesheet:(id)arg1 roleIndex:(unsigned long long)arg2;
+ (id)p_bootstrappedStylePresetInContext:(id)arg1 stylesheet:(id)arg2 presetIndex:(unsigned long long)arg3;
+ (id)p_defaultParagraphStyleOfClass:(Class)arg1 stylesheet:(id)arg2 identifier:(id)arg3;
+ (id)p_defaultStyleOfClass:(Class)arg1 stylesheet:(id)arg2 identifier:(id)arg3;

@end

