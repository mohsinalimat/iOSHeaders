//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WeatherFoundation/WFTask.h>

@interface WFFavoriteLocationRequest : WFTask
{
    CDUnknownBlockType _resultHandler;
}

@property(readonly) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (void).cxx_destruct;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (id)initWithResultHandler:(CDUnknownBlockType)arg1;

@end

