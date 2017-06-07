//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUExportJob.h>

@class AVAsset, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PIAutoLoopExportJob : NUExportJob
{
    NSObject<OS_dispatch_queue> *_autoLoopProcessingQueue;
    NSObject<OS_dispatch_group> *_renderGroup;
    AVAsset *_videoSource;
}

@property(retain, nonatomic) AVAsset *videoSource; // @synthesize videoSource=_videoSource;
- (void).cxx_destruct;
- (_Bool)wantsCompleteStage;
- (_Bool)complete:(out id *)arg1;
- (_Bool)render:(out id *)arg1;
- (_Bool)prepare:(out id *)arg1;
- (id)evaluateOutputGeometry:(out id *)arg1;
- (id)recipe;
- (id)scalePolicy;
- (_Bool)wantsOutputVideo;
- (_Bool)wantsOutputGeometry;
- (id)autoLoopExportRequest;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithAutoLoopExportRequest:(id)arg1;

@end
