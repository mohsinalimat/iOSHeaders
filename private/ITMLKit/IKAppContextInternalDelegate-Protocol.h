//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKAppContextDelegate-Protocol.h>

@class IKAppContext, NSDictionary, NSString, NSURL;

@protocol IKAppContextInternalDelegate <IKAppContextDelegate>
- (_Bool)shouldForceIgnoreHTTPCacheForAppContext:(IKAppContext *)arg1;

@optional
- (void)appContext:(IKAppContext *)arg1 didStartWithOptions:(NSDictionary *)arg2 validatedJSString:(NSString *)arg3;
- (_Bool)appContext:(IKAppContext *)arg1 shouldStartWithScript:(NSString *)arg2 scriptURL:(NSURL *)arg3 loadedFromFallback:(_Bool)arg4;
@end

