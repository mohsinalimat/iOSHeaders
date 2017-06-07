//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, NSArray, NSObject, NSString, NTPBWidgetConfiguration;
@protocol FCContentContext;

@interface FCWidgetConfigOperation : FCOperation
{
    id <FCContentContext> _context;
    NSString *_widgetConfigID;
    FCCachePolicy *_widgetConfigCachePolicy;
    FCCachePolicy *_articleListCachePolicy;
    NSArray *_networkEvents;
    CDUnknownBlockType _widgetConfigCompletionHandlerWithInterest;
    NTPBWidgetConfiguration *_resultWidgetConfigRecord;
    NSObject *_resultInterestToken;
}

@property(copy, nonatomic) NSObject *resultInterestToken; // @synthesize resultInterestToken=_resultInterestToken;
@property(copy, nonatomic) NTPBWidgetConfiguration *resultWidgetConfigRecord; // @synthesize resultWidgetConfigRecord=_resultWidgetConfigRecord;
@property(copy, nonatomic) CDUnknownBlockType widgetConfigCompletionHandlerWithInterest; // @synthesize widgetConfigCompletionHandlerWithInterest=_widgetConfigCompletionHandlerWithInterest;
@property(copy, nonatomic) NSArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property(retain, nonatomic) FCCachePolicy *articleListCachePolicy; // @synthesize articleListCachePolicy=_articleListCachePolicy;
@property(retain, nonatomic) FCCachePolicy *widgetConfigCachePolicy; // @synthesize widgetConfigCachePolicy=_widgetConfigCachePolicy;
@property(copy, nonatomic) NSString *widgetConfigID; // @synthesize widgetConfigID=_widgetConfigID;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

