//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@protocol CNCancelable;

@protocol CNScheduler <NSObject>
- (double)timestamp;
- (id <CNCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2 qualityOfService:(unsigned long long)arg3;
- (id <CNCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (id <CNCancelable>)performCancelableBlock:(void (^)(CNCancelationToken *))arg1 qualityOfService:(unsigned long long)arg2;
- (id <CNCancelable>)performCancelableBlock:(void (^)(CNCancelationToken *))arg1;
- (void)performBlock:(void (^)(void))arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(void (^)(void))arg1;
@end

