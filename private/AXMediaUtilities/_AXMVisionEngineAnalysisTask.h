//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMTask.h>

@class AXMSourceNode, AXMVisionPipelineContext, NSUUID;

@interface _AXMVisionEngineAnalysisTask : AXMTask
{
    NSUUID *_identifier;
    AXMVisionPipelineContext *_context;
    AXMSourceNode *_source;
}

+ (id)itemWithSource:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) AXMSourceNode *source; // @synthesize source=_source;
@property(retain, nonatomic) AXMVisionPipelineContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 context:(id)arg2;

@end

