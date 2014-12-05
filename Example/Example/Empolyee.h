//
//  Rosetta Stone
//  http://product.rosettastone.com/news/
//
//
//  Documentation
//  http://cocoadocs.org/docsets/RSTCoreDataKit
//
//
//  GitHub
//  https://github.com/rosettastone/RSTCoreDataKit
//
//
//  License
//  Copyright (c) 2014 Rosetta Stone
//  Released under a BSD license: http://opensource.org/licenses/BSD-3-Clause
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Company;

@interface Empolyee : NSManagedObject

@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) NSDate * birthDate;
@property (nonatomic, retain) NSNumber * employeeId;
@property (nonatomic, retain) Company *company;

@end
