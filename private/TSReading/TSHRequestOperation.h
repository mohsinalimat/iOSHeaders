//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSHOperation.h>

@class NSString;

@interface TSHRequestOperation : TSHOperation
{
    NSString *mEtag;
}

- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)setEtag:(id)arg1;
- (id)etag;
- (void)dealloc;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;
- (id)request;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5;

@end

