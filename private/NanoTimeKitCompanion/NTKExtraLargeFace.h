//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKExtraLargeFace : NTKFace
{
}

+ (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
+ (id)_customEditModes;
+ (id)_defaultSelectedComplicationSlot;
+ (id)_complicationSlotDescriptors;
- (_Bool)_complication:(id)arg1 appearsInDailySnapshotForSlot:(id)arg2;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (_Bool)_snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;

@end

