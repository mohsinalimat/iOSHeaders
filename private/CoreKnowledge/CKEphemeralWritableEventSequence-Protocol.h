//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CKEvent, NSDate, NSString;

@protocol CKEphemeralWritableEventSequence
- (void)removeAllEventsSavedInKnowledgeStreamNamed:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)writeEventsToKnowledgeStreamNamed:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (_Bool)appendEvent:(CKEvent *)arg1;
- (void)loadFromKnowledgeStreamNamed:(NSString *)arg1 between:(NSDate *)arg2 and:(NSDate *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end
