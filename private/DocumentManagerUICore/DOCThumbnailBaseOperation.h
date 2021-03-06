//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@protocol DOCThumbnailOperationDelegate;

@interface DOCThumbnailBaseOperation : NSOperation
{
    _Bool _representativeIcon;
    unsigned int _qos;
    long long _executionState;
    double _scale;
    unsigned long long _style;
    id <DOCThumbnailOperationDelegate> _delegate;
    struct CGSize _size;
}

+ (id)processImage:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 backgroundDecorator:(CDUnknownBlockType)arg5 foregroundDecorator:(CDUnknownBlockType)arg6;
@property(nonatomic) unsigned int qos; // @synthesize qos=_qos;
@property(nonatomic) _Bool representativeIcon; // @synthesize representativeIcon=_representativeIcon;
@property(nonatomic) __weak id <DOCThumbnailOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (_Bool)generateThumbnail:(id *)arg1 representativeIcon:(_Bool *)arg2;
- (void)notifyDelegateWithThumbnail:(id)arg1 failed:(_Bool)arg2 representativeIcon:(_Bool)arg3;
- (void)start;
- (void)setExecutionState:(long long)arg1;
@property(readonly, nonatomic) long long executionState; // @synthesize executionState=_executionState;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 delegate:(id)arg3 style:(unsigned long long)arg4 qos:(unsigned int)arg5;

@end

