//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NTKDelayedBlock, _NTKDFaceSnapshottingWindow;

@interface NTKFaceSnapshotter : NSObject
{
    _NTKDFaceSnapshottingWindow *_snapshotWindow;
    NTKDelayedBlock *_hideSnapshotWindowBlock;
}

- (void).cxx_destruct;
- (void)_hideSnapshotWindow;
- (void)_showSnapshotWindow;
- (id)_mainQueue_takeSnapshotOfFace:(id)arg1 snapshotUIOnly:(_Bool)arg2 unadornedContent:(_Bool)arg3 forceLockedUI:(_Bool)arg4 hasBlankComplication:(_Bool *)arg5;
- (id)createFace:(id)arg1 snapshotUIOnly:(_Bool)arg2 unadornedContent:(_Bool)arg3 forceLockedUI:(_Bool)arg4;
- (void)provideSnapshotOfFace:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)takeSnapshotOfFace:(id)arg1 snapshotUIOnly:(_Bool)arg2 unadornedContent:(_Bool)arg3 forceLockedUI:(_Bool)arg4 hasBlankComplication:(_Bool *)arg5;

@end

