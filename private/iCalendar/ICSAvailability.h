//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCalendar/ICSComponent.h>

@class ICSDate, ICSDuration, ICSUserAddress, NSString, NSURL;

@interface ICSAvailability : ICSComponent
{
}

+ (id)name;

// Remaining properties
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) ICSDate *dtend; // @dynamic dtend;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) ICSDuration *duration; // @dynamic duration;
@property(retain) ICSDate *last_modified; // @dynamic last_modified;
@property(retain) ICSUserAddress *organizer; // @dynamic organizer;
@property unsigned long long sequence; // @dynamic sequence;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) NSURL *url; // @dynamic url;

@end

