//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Stocks/YQLRequest.h>

@class Stock, StockNewsItemCollection;
@protocol NewsUpdaterDelegate;

@interface NewsUpdater : YQLRequest
{
    id <NewsUpdaterDelegate> _delegate;
    _Bool _firstLoad;
    double _lastResponseTimestamp;
    StockNewsItemCollection *_lastNewsItemCollection;
    Stock *_stock;
    CDUnknownBlockType _updateCompletionHandler;
}

+ (id)_newsItemCollectionCache;
+ (id)sharedNewsUpdater;
@property(nonatomic) __weak id <NewsUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)resetLocale;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (void)parseData:(id)arg1;
- (void)saveLastResponse;
- (void)fetchNewsForStock:(id)arg1;
- (void)fetchNewsForStock:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadNewsCacheFromDiskForSymbol:(id)arg1;
- (void)clearNewsCacheOnDisk;
- (_Bool)shouldReloadOnResume;
- (id)init;

@end

