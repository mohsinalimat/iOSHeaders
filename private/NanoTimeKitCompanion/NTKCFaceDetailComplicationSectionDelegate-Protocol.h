//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSArray, NSString, NTKCFaceDetailComplicationSectionController, NTKComplication;

@protocol NTKCFaceDetailComplicationSectionDelegate <NSObject>
- (void)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 didChangeToComplication:(NTKComplication *)arg2 forSlot:(NSString *)arg3;
- (NSArray *)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 allowedComplicationsForSlot:(NSString *)arg2;
@end

