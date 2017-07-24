//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Stocks/StockUpdater.h>

#import <Stocks/NSURLSessionTaskDelegate-Protocol.h>

@class NSDate, NSString, NSURLSession;

@interface BackgroundStockUpdater : StockUpdater <NSURLSessionTaskDelegate>
{
    NSDate *_earliestBeginDate;
    CDUnknownBlockType _finishEventsHandler;
}

@property(copy, nonatomic) CDUnknownBlockType finishEventsHandler; // @synthesize finishEventsHandler=_finishEventsHandler;
@property(copy, nonatomic) NSDate *earliestBeginDate; // @synthesize earliestBeginDate=_earliestBeginDate;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id)taskForRequest:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) NSURLSession *session;
- (void)reestablishBackgroundSessionForManager:(id)arg1 withFinishEventsHandler:(CDUnknownBlockType)arg2;
- (void)_createDefaultSession;
- (id)_backgroundSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

