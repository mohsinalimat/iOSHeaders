//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUExportJob.h>

@class NSData;

@interface NUImageExportJob : NUExportJob
{
    NSData *_destinationData;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (_Bool)render:(out id *)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (_Bool)wantsOutputImage;
- (_Bool)wantsOutputGeometry;
- (id)result;
- (id)imageDestinationOptions;
- (id)_filterProperties:(id)arg1;
- (id)imageExportRequest;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithImageExportRequest:(id)arg1;

@end

