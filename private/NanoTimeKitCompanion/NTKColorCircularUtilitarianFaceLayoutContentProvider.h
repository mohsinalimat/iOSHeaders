//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceLayoutContentProvider.h>

@class NTKUtilityComplicationFactory;

@interface NTKColorCircularUtilitarianFaceLayoutContentProvider : NTKFaceLayoutContentProvider
{
    NTKUtilityComplicationFactory *_complicationFactory;
}

- (void).cxx_destruct;
- (id)_complicationSlots;
- (id)_colorComplicationSlots;
- (id)_utilityComplicationSlots;
- (double)_lisaGapForState:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (long long)_utilitySlotForSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)init;

@end

