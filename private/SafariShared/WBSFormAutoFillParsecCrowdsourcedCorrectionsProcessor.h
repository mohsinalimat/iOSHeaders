//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject
{
}

+ (id)test_correctionsSchema;
+ (id)_schemaWithExpectedClass:(Class)arg1 errorCode:(long long)arg2 isOptional:(_Bool)arg3;
+ (id)_correctionsSchema;
- (id)_correctionsStore;
- (void)setCorrectionsWithJSONData:(id)arg1 retrievalURLString:(id)arg2;
- (void)getLastCorrectionsRetrievalURLStringWithResultHandler:(CDUnknownBlockType)arg1;

@end

