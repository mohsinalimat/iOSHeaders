//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequest.h>

@class ASDMigrationRequestOptions;

@interface ASDMigrationRequest : ASDRequest
{
    CDUnknownBlockType _completionBlock;
    ASDMigrationRequestOptions *_options;
}

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 error:(id)arg2;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(id)arg1;

@end

