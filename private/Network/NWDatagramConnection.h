//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Network/NWConnection.h>

@interface NWDatagramConnection : NWConnection
{
}

+ (id)connectionWithConnectedSocket:(int)arg1;
- (_Bool)writeDatagrams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)readDatagramsWithMinimumCount:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

