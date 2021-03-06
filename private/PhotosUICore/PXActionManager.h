//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PXActionPerformerDelegate;

@interface PXActionManager : NSObject
{
    id <PXActionPerformerDelegate> _performerDelegate;
}

+ (CDUnknownBlockType)_unlockDeviceHandler;
+ (void)setEnsureUnlockedDeviceHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <PXActionPerformerDelegate> performerDelegate; // @synthesize performerDelegate=_performerDelegate;
- (void).cxx_destruct;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)previewActionGroupForActionType:(id)arg1;
- (id)previewActionForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (_Bool)canPerformActionType:(id)arg1;

@end

