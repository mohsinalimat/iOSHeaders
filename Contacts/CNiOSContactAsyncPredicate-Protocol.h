//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@protocol CNCancelable;

@protocol CNiOSContactAsyncPredicate <CNiOSContactPredicate>
- (id <CNCancelable>)cn_fetchPeopleInAddressBook:(void *)arg1 withSortOrder:(unsigned int)arg2 options:(unsigned long long)arg3 progressiveResults:(void (^)(NSArray *, NSDictionary *))arg4 completion:(void (^)(NSError *))arg5;
@end
