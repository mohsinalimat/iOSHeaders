//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCopyAccessTokenOperation : BROperation
{
    NSURL *_url;
    CDUnknownBlockType _shareCopyAccessTokenCompletionBlock;
}

@property(copy) CDUnknownBlockType shareCopyAccessTokenCompletionBlock; // @synthesize shareCopyAccessTokenCompletionBlock=_shareCopyAccessTokenCompletionBlock;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithURL:(id)arg1;

@end

