//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaSocial/NSObject-Protocol.h>

@class MSCLAttachmentPropertiesTableViewSection;

@protocol MSCLAttachmentPropertiesTableViewSectionDelegate <NSObject>
- (void)tableViewSection:(MSCLAttachmentPropertiesTableViewSection *)arg1 titleLengthChanged:(long long)arg2;
- (void)tableViewSection:(MSCLAttachmentPropertiesTableViewSection *)arg1 artistLengthChanged:(long long)arg2;

@optional
- (void)tableViewSection:(MSCLAttachmentPropertiesTableViewSection *)arg1 reloadTagSuggestionsForRowAtIndex:(long long)arg2;
- (void)tableViewSection:(MSCLAttachmentPropertiesTableViewSection *)arg1 reloadCellSizeForRowAtIndex:(long long)arg2;
@end

