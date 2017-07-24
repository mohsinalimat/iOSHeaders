//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosEditUI/PUVideoURLExportNode-Protocol.h>

@class NSArray, NSString, NSURL, NUVideoExportClient, PLPhotoEditModel;
@protocol PUImageInfoNode, PUVideoURLNode, PXRunNodeDelegate;

@interface PUVideoExportNode : PXRunNode <PUVideoURLExportNode>
{
    NUVideoExportClient *_exportClient;
    id <PUVideoURLNode> _videoURLNode;
    id <PUImageInfoNode> _imageInfoNode;
    unsigned long long _quality;
    PLPhotoEditModel *_photoEditModel;
    NSString *_livePhotoPairingIdentifier;
    NSURL *_videoURL;
    struct CGSize _renderedVideoSize;
}

@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier; // @synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier;
@property(readonly, copy, nonatomic) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property(readonly, nonatomic) unsigned long long quality; // @synthesize quality=_quality;
@property(readonly, nonatomic) id <PUImageInfoNode> imageInfoNode; // @synthesize imageInfoNode=_imageInfoNode;
@property(readonly, nonatomic) id <PUVideoURLNode> videoURLNode; // @synthesize videoURLNode=_videoURLNode;
@property(readonly, nonatomic) struct CGSize renderedVideoSize; // @synthesize renderedVideoSize=_renderedVideoSize;
- (void).cxx_destruct;
- (void)_handleExportCompletedWithSuccess:(_Bool)arg1 editedSize:(struct CGSize)arg2 error:(id)arg3;
- (void)didCancel;
@property(readonly, nonatomic) double progress;
- (void)run;
- (id)_editSource;
- (id)_newOutputURL;
- (id)_exportPresetName;
- (id)initWithVideoURLNode:(id)arg1 imageURLNode:(id)arg2 quality:(unsigned long long)arg3 livePhotoPairingIdentifier:(id)arg4 photoEditModel:(id)arg5;

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end

