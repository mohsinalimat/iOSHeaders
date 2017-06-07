//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSKModel-Protocol.h>
#import <TSReading/TSSPreset-Protocol.h>
#import <TSReading/TSSStyleClient-Protocol.h>

@class NSString, TSTTableStyleNetwork;

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel>
{
    unsigned long long mIndex;
    TSTTableStyleNetwork *mStyleNetwork;
}

- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)styleNetworkInStylesheet:(id)arg1;
- (id)swatchImage;
@property(readonly, nonatomic) NSString *presetKind;
- (_Bool)isThemeEquivalent:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithStyleNetwork:(id)arg1 index:(unsigned long long)arg2;
- (id)p_documentRoot;
@property(copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property(nonatomic) unsigned long long index;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

