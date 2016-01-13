//
//  CheckCapabilities.h
//  Owncloud iOs Client
//
//  Created by Gonzalo Gonzalez on 3/11/15.
//
//

#import <Foundation/Foundation.h>

extern NSString * CapabilitiesUpdatedNotification;


@interface CheckCapabilities : NSObject

+ (id)sharedCheckCapabilities;

- (void) updateServerCapabilitiesOfActiveAccount;

@end
