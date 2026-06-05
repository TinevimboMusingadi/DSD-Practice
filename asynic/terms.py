import asyncio 
import time 

def sync_function(test_param : str ) -> str : 
	print("this is a synchronous function.")

	time.sleep(0.1)

	return f"sync results : {test_param}"

# Also known as the a coroure funcinr 
async def async_function(test_param: str) -> str :
	print ("this is asynchronous coroutiine function")

	await asyncio.sleep(0.2)

	return f"Async results :{test_param}"

async def main():
    sync_result = sync_function("Test")

    print(sync_result)



if __name__ == "__main__":
        

	asyncio.run(main())