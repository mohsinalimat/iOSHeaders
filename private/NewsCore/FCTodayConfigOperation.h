//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSObject, NSString, NTPBTodayConfig;
@protocol FCContentContext;

@interface FCTodayConfigOperation : FCOperation
{
    id <FCContentContext> _context;
    NSString *_widgetConfigID;
    NSArray *_networkEvents;
    CDUnknownBlockType _todayConfigCompletionHandlerWithInterest;
    NTPBTodayConfig *_resultTodayConfig;
    NSObject *_resultInterestToken;
}

@property(copy, nonatomic) NSObject *resultInterestToken; // @synthesize resultInterestToken=_resultInterestToken;
@property(copy, nonatomic) NTPBTodayConfig *resultTodayConfig; // @synthesize resultTodayConfig=_resultTodayConfig;
@property(copy, nonatomic) CDUnknownBlockType todayConfigCompletionHandlerWithInterest; // @synthesize todayConfigCompletionHandlerWithInterest=_todayConfigCompletionHandlerWithInterest;
@property(copy, nonatomic) NSArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property(copy, nonatomic) NSString *widgetConfigID; // @synthesize widgetConfigID=_widgetConfigID;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

