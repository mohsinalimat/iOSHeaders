//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BLRepairLayerStack, NSDictionary, NSLock;

@interface BLRepairModel : NSObject
{
    NSDictionary *_strokesDataDictionary;
    BLRepairLayerStack *_layerStack;
    NSLock *_lock;
}

- (id)imagePatchList;
- (_Bool)hasLayerStack;
- (id)layerStack;
- (void)setLayerStack:(id)arg1;
- (void)buildLayerStackWithAnalysisImage:(id)arg1 andRepairImage:(id)arg2;
- (_Bool)hasRedeye;
- (_Bool)hasRepair;
- (_Bool)hasRepairOrRedeye;
- (void)dealloc;
- (id)initWithAdjustmentsDictionary:(id)arg1;

@end

