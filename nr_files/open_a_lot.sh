#/bin/sh

int=1
while(( $int<=200 ))
do
	./open&
	let "int++"
done

sleep 100
