//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, PLPhotoEditModel, PUEditableMediaProvider, PUPhotoEditResourceLoader;
@protocol PUEditableAsset;

@interface PUEditAdjustmentRequest : NSObject
{
    NSProgress *_progress;
    id <PUEditableAsset> _asset;
    PLPhotoEditModel *_modifiedEditModel;
    PLPhotoEditModel *_originalEditModel;
    CDUnknownBlockType _performChangesBlock;
    CDUnknownBlockType _completionHandler;
    PUPhotoEditResourceLoader *_loader;
    PUEditableMediaProvider *_mediaProvider;
}

@property(retain, nonatomic) PUEditableMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) PUPhotoEditResourceLoader *loader; // @synthesize loader=_loader;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType performChangesBlock; // @synthesize performChangesBlock=_performChangesBlock;
@property(copy, nonatomic) PLPhotoEditModel *originalEditModel; // @synthesize originalEditModel=_originalEditModel;
@property(copy, nonatomic) PLPhotoEditModel *modifiedEditModel; // @synthesize modifiedEditModel=_modifiedEditModel;
@property(retain, nonatomic) id <PUEditableAsset> asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;

@end

